<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>

<jsp:useBean id="boardData" class="board.BoardData" scope="request"/>
<table border="1">
<tr><td>제목</td><td><jsp:getProperty name="boardData" property="title"/></td></tr>
<tr><td>작성자</td><td><jsp:getProperty	name="boardData" property="writer"/></td></tr>
<tr><td>내용</td><td><jsp:getProperty name="boardData" property="text"/></td></tr>
<tr><td>비밀번호</td><td><jsp:getProperty name="boardData" property="pass"/></td></tr>

</table>

</body>
</html>