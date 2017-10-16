<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
<%-- <jsp:useBean id="meminfo" class="member.MemberInfo" scope="page"/> --%>
<jsp:useBean id="meminfo" class="member.MemberInfo" scope="request"/>
<jsp:setProperty property="name" name="meminfo" value="Jimmy"/>
<jsp:setProperty property="age" name="meminfo" value="10"/>
<jsp:forward page="scope_test2.jsp"/>
	
</body>
</html>