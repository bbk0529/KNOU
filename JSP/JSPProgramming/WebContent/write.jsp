<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<jsp:useBean id="boardData" class="board.BoardData" scope="request"/>
<jsp:setProperty name="boardData" property="*"/>
<jsp:forward page="view.jsp"/>